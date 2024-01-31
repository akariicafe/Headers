@class NSArray;

@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {
    NSArray *_groupLengths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long totalDigitCount;
@property (readonly, nonatomic) unsigned long long numberOfDigitGroups;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDigitCount:(unsigned long long)a0;
- (id)initWithGroupLengths:(id)a0;
- (unsigned long long)numberOfDigitsInGroup:(unsigned long long)a0;

@end
