@class NSString;

@interface TSCEQuotedRefPathWord : NSObject

@property (nonatomic) BOOL wasQuoted;
@property (nonatomic) BOOL hasPreserveFlag;
@property (retain, nonatomic) NSString *rawString;

- (id)description;
- (void).cxx_destruct;
- (id)trimmedString;
- (id)initWithRawString:(id)a0;
- (id)quoteStringIfNeeded;
- (id)trimmedStringWithPreserveFlag:(BOOL)a0;

@end
