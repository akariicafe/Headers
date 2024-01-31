@interface CACGPathCodingProxy : CACodingProxy {
    struct CGPath { } *_path;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)decodedObject;
- (id)initWithCoder:(id)a0;

@end
