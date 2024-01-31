@class NSArray, ISIcon;

@interface ISDecoratedIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) ISIcon *icon;
@property (readonly) NSArray *decorations;

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (id)iconWithDecorations:(id)a0;
- (id)initWithIcon:(id)a0 decorations:(id)a1;

@end
