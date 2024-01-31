@class NSObject;
@protocol OS_dispatch_data, OS_nw_content_context;

@interface NWMessage : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_data> *internalContent;
@property (retain, nonatomic) NSObject<OS_nw_content_context> *internalContext;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0 context:(id)a1;

@end
