@class AXMOutputActionHandle;

@interface AXMOutputAction : NSObject {
    AXMOutputActionHandle *_handle;
}

@property (readonly, nonatomic) AXMOutputActionHandle *handle;

- (id)_initWithHandle:(id)a0;
- (void).cxx_destruct;

@end
