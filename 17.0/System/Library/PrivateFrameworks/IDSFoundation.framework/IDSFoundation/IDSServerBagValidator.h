@class IDSServerBagConfig;

@interface IDSServerBagValidator : NSObject

@property (retain, nonatomic) IDSServerBagConfig *config;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)trustedContentsFromRawContents:(id)a0 shouldReport:(BOOL)a1 withError:(id *)a2;

@end
