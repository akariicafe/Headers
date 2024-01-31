@class NSArray, NSDictionary;

@interface GEOComposedStringOptions : NSObject <NSCopying> {
    BOOL _isUpdatingFormatString;
}

@property (retain, nonatomic) NSArray *arguments;
@property (nonatomic) BOOL createAttributedString;
@property (retain, nonatomic) NSDictionary *stringAttributes;
@property (copy, nonatomic) id /* block */ formatStyleHandler;
@property (nonatomic) BOOL shouldUpdateFormatStrings;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
