@interface _SWHighlightEventAllowList : NSObject

+ (id)allowedClasses;
+ (id)_eventClassToTypeMap;
+ (Class)eventClassForType:(long long)a0;
+ (long long)eventTypeForClass:(Class)a0;

@end
