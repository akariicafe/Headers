@interface PLCodec : NSObject

+ (id)HEVCfourCharCode;
+ (id)H264fourCharCode;
+ (unsigned int)_typeCodeFromString:(id)a0;
+ (BOOL)isPlayaleFourCharCodeName:(id)a0;

@end
