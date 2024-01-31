@class NSString, NSArray, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecRichText : WBSParsecModel {
    WBSParsecImageRepresentation *_contentAdvisoryImage;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSNumber *maximumLines;
@property (readonly, nonatomic) NSArray *formattedTextList;
@property (readonly, nonatomic) NSArray *moreGlyphRepresentations;
@property (readonly, nonatomic) NSString *contentAdvisoryString;

+ (id)schema;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)contentAdvisoryImageWithSession:(id)a0;
- (id)moreGlyphsWithSession:(id)a0;

@end
