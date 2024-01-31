@class NSString, BMAccessDescriptor;

@interface _BMAccessAssertion : NSObject <BMAccessAssertion> {
    long long _handle;
}

@property (readonly, nonatomic) BMAccessDescriptor *descriptor;
@property (readonly, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 extensionToken:(id)a1 path:(id)a2;

@end
