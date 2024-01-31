@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}

- (id)children;
- (id)displayString;
- (int)property;
- (int)recordID;
- (id)address;
- (BOOL)isGroup;
- (void *)record;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)placeholderName;
- (id)initWithChildren:(id)a0 displayString:(id)a1;
- (id)commentedAddress;
- (id)compositeName;
- (BOOL)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (BOOL)wasCompleteMatch;

@end
