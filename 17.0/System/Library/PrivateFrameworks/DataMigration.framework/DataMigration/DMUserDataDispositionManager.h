@interface DMUserDataDispositionManager : NSObject

+ (unsigned int)basicDispositionFlagsFromDispositionFlags:(unsigned int)a0;
+ (id)descriptionFromDispositionFlags:(unsigned int)a0;
+ (unsigned int)dispositionFlagsFromDispositionDict:(id)a0;
+ (unsigned int)backupSourceDispositionFlagsFromDispositionFlags:(unsigned int)a0;

@end
