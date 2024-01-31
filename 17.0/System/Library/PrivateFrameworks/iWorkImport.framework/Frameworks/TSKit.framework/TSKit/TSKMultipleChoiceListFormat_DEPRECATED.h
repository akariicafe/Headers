@protocol TSUMultipleChoiceListChoiceProviding, NSObject;

@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>

@property (readonly, nonatomic) char initialValue;
@property (readonly, nonatomic) unsigned int multipleChoiceListFormatID;
@property (readonly, nonatomic) id<NSObject, TSUMultipleChoiceListChoiceProviding> popupModel;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)asMultipleChoiceListFormat;
- (id)initWithInitialValue:(char)a0 multipleChoiceListFormatID:(unsigned int)a1 popupModel:(id)a2;

@end
