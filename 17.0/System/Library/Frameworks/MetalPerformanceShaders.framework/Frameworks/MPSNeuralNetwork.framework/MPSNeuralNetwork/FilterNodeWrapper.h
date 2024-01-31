@interface FilterNodeWrapper : NSObject <NSSecureCoding> {
    void *node;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapperWithFilterNode:(void *)a0;

- (void)dealloc;
- (void *)node;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithFilterNode:(void *)a0;

@end
