@class NSIndexSet, NSArray;

@interface NTKComplicationProviderOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSIndexSet *allowedComplicationTypes;
@property (copy, nonatomic) NSArray *rankedFamilies;
@property (copy, nonatomic) NSArray *supportedDateStyles;
@property (nonatomic) BOOL includeDisabledTypes;
@property (nonatomic) BOOL allowGenericDateComplication;

- (id)_initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
