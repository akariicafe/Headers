@interface DocumentUnderstanding.DUDocumentGlobals : NSObject

@property (class, nonatomic, readonly) long long defaultMaxLength;
@property (class, nonatomic, readonly) long long htmlStringMaxLength;
@property (class, nonatomic, readonly) long long warningMaxLength;
@property (class, nonatomic, readonly) long long noMaxLength;

- (id)init;

@end
