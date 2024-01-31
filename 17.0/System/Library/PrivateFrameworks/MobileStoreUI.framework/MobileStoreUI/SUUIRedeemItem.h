@class NSString;
@protocol SUUIArtworkProviding;

@interface SUUIRedeemItem : SUUIItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) id<SUUIArtworkProviding> artworks;
@property (nonatomic) long long itemKind;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)artworkURLForSize:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })ageBandRange;
- (id)largestArtworkURL;

@end
