@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {
    NSMutableDictionary *_consumersBySection;
}

- (void)dealloc;
- (void)done;
- (void).cxx_destruct;
- (void)addConsumer:(id)a0 forSection:(id)a1;
- (void)appendData:(id)a0 forSection:(id)a1;
- (id)consumersBySection;

@end
