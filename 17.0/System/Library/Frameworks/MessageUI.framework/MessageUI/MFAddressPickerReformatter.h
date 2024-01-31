@class NSArray;

@interface MFAddressPickerReformatter : NSObject {
    NSArray *_addresses;
    NSArray *_reformattedAddresses;
    double _maximumWidth;
    double _minimumFontSize;
    double _maximumFontSize;
    double _fontSize;
    BOOL _attributesDisabled;
}

- (void)setMaximumWidth:(double)a0;
- (void)setFontSize:(double)a0;
- (void).cxx_destruct;
- (unsigned long long)_defaultOptions;
- (void)setAddresses:(id)a0;
- (void)_invalidateReformattedAddresses;
- (void)_restoreMiddleTruncationRanges:(id)a0;
- (void)_attemptUniquingDisplayedStrings;
- (BOOL)_attemptUniquingDisplayedStringsUsingBlock:(id /* block */)a0;
- (void)_determineFontSize:(BOOL *)a0;
- (void)_expandAllLocalParts;
- (id)_reformattedAddressesByDisplayedStrings;
- (BOOL)_reformattedAddressesByDisplayedStringsAreUnique:(id)a0;
- (id)_saveMiddleTruncationRanges;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)_updateReformattedAddressesIfNecessary;
- (unsigned long long)numberOfReformattedAddresses;
- (id)reformattedAddressAtIndex:(unsigned long long)a0;
- (id)reformattedAddressStringAtIndex:(unsigned long long)a0;
- (void)setAttributesDisabled:(BOOL)a0;
- (void)setMinimumFontSize:(double)a0 maximumFontSize:(double)a1;

@end
