@class NSString, NSURL, NSMutableDictionary;

@interface BLItemArtworkImage : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (copy, nonatomic) NSString *imageKind;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) double imageScale;

- (unsigned long long)hash;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (long long)height;
- (id)description;
- (id)valueForProperty:(id)a0;
- (long long)width;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArtworkDictionary:(id)a0;
- (void)setImageKindWithTypeName:(id)a0 variantName:(id)a1;

@end
