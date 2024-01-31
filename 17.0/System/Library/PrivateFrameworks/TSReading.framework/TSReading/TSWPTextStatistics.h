@interface TSWPTextStatistics : NSObject <NSCopying>

@property (nonatomic) unsigned long long wordCount;
@property (nonatomic) unsigned long long charactersNoWhiteSpace;
@property (nonatomic) unsigned long long paragraphCount;
@property (nonatomic) BOOL isAccurate;

- (void)resetStatistics;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTextStatistics:(id)a0;
- (void)removeTextStatistics:(id)a0;
- (void)setTextStatistics:(id)a0;

@end
