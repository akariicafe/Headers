@class NSString;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
}

@property long long assetMediaType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)localIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalIdentifier:(id)a0;

@end
