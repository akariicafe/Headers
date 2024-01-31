@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSSecureCoding> {
    NSString *_fontName;
    NSString *_filePath;
    double _lineHeight;
    double _baseLine;
    NSArray *_characterSprites;
    struct map<unsigned short, SKSpriteNode *, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, SKSpriteNode *>>> { struct __tree<std::__value_type<unsigned short, SKSpriteNode *>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, SKSpriteNode *>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, SKSpriteNode *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, SKSpriteNode *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, SKSpriteNode *>, std::less<unsigned short>>> { unsigned long long __value_; } __pair3_; } __tree_; } _characterSpriteByChar;
    struct map<unsigned short, double, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> { struct __tree<std::__value_type<unsigned short, double>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, double>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, double>, std::less<unsigned short>>> { unsigned long long __value_; } __pair3_; } __tree_; } _characterAdvanceByChar;
    struct map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, double>>> { struct __tree<std::__value_type<unsigned int, double>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, double>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, double>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _characterKerningByCharPair;
    BOOL _internal;
    NSString *_fileName;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)fontWithTexture:(id)a0 fontDataString:(id)a1;
+ (id)_fontForFileNamed:(id)a0;
+ (id)fontForFileNamed:(id)a0;

- (id)init;
- (id)fontName;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)lineHeight;
- (double)advanceForCharacterNamed:(unsigned short)a0;
- (double)kerningForCharacterNamed:(unsigned short)a0 followedBy:(unsigned short)a1;
- (BOOL)loadFontWithTexture:(id)a0 fontDataString:(id)a1;
- (id)spriteForCharacterNamed:(unsigned short)a0;

@end
