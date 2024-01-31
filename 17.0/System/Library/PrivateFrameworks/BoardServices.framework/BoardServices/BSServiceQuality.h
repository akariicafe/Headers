@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)main;
+ (id)utility;
+ (id)background;
+ (id)userInitiated;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)userInteractive;
+ (id)serviceWithClass:(unsigned int)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
