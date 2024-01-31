@interface OADDateTimeField : OADTextField

@property (nonatomic) int format;

- (id)init;
- (BOOL)isEmpty;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
