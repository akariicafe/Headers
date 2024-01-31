@class NSArray, ISConcreteIcon;

@interface ISAliasIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) id alias;
@property (readonly) ISConcreteIcon *resolvedIcon;
@property (readonly) ISConcreteIcon *icon;

+ (BOOL)supportsSecureCoding;
+ (id)_iconForValues:(id)a0;
+ (id)_iconForBookmarkData:(id)a0;
+ (id)aliasUUID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)resolve;
- (void).cxx_destruct;
- (id)decorations;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (id)initWithBookmarkData:(id)a0;
- (id)initWithAliasURL:(id)a0;
- (id)initWithBookmarkData:(id)a0 decorations:(id)a1;

@end
