@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (void)initialize;

- (void)dealloc;
- (id)description;
- (unsigned int)mediaType;
- (id)debugDescription;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end
