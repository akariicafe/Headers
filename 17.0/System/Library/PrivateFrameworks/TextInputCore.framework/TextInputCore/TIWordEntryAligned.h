@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedTouches;
@property (retain, nonatomic) NSArray *alignedKeyboardInputs;
@property (copy, nonatomic) NSString *expectedString;
@property (copy, nonatomic) NSString *completeString;
@property (retain, nonatomic) TIWordEntry *originalWord;
@property (nonatomic) BOOL isContinuousPathConversion;
@property (nonatomic) int inSessionAlignmentConfidence;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
