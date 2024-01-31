@class NSString;

@interface _MTLObjectWithLabel : NSObject {
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
}

@property (copy) NSString *label;

- (id)init;
- (void)dealloc;
- (id)label;
- (void)setLabel:(id)a0;
- (id)retainedLabel;

@end
