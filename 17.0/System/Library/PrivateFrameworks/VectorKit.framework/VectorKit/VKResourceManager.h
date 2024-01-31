@class NSBundle;

@interface VKResourceManager : NSObject {
    NSBundle *_vkBundle;
}

- (id)init;
- (id)pathForResourceWithName:(id)a0;
- (id)_localNameForResourceName:(id)a0;
- (BOOL)isDevResourceWithName:(id)a0;
- (void).cxx_destruct;
- (id)dataForResourceWithName:(id)a0;
- (id)dataForResourceWithName:(id)a0 fallbackNameHandler:(id /* block */)a1;

@end
