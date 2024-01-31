@class NSOperation, NSMutableSet;
@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject

@property (readonly, nonatomic) id<WBSSiteMetadataProvider> provider;
@property (readonly, nonatomic) NSMutableSet *tokens;
@property (weak, nonatomic) NSOperation *operation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;

@end
