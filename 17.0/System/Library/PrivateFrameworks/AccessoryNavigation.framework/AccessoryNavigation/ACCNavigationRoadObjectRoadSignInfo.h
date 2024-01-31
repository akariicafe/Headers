@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadSignInfo : NSObject

@property (retain) NSMutableDictionary *infoDict;

+ (id)keyForType:(unsigned short)a0;

- (id)copyDictionary;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyInfo:(unsigned short)a0;
- (BOOL)setInfo:(unsigned short)a0 data:(id)a1;
- (BOOL)_checkDataClassForType:(unsigned short)a0 data:(id)a1;
- (void)setInfoFromDictionary:(id)a0;

@end
