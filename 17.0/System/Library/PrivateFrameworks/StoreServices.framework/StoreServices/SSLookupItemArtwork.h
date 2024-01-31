@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject

@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSURL *URL;

- (id)initWithLookupDictionary:(id)a0;
- (void)dealloc;
- (id)URLWithHeight:(long long)a0 width:(long long)a1 cropStyle:(id)a2 format:(id)a3;
- (id)URLWithHeight:(long long)a0 width:(long long)a1;
- (id)URLWithHeight:(long long)a0 width:(long long)a1 format:(id)a2;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3 forColorKind:(id)a4;

@end
