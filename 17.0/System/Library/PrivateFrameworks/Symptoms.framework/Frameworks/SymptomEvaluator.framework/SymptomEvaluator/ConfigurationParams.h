@class NSDictionary, NSObject;
@protocol OS_os_log;

@interface ConfigurationParams : NSObject

@property (retain, nonatomic) NSDictionary *underlyingDictionary;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)extractStringFromKey:(id)a0 defaultTo:(id)a1;
- (int)extractKey:(id)a0 toBOOL:(BOOL *)a1 defaultTo:(BOOL)a2;
- (int)extractKey:(id)a0 toBool:(BOOL *)a1 defaultTo:(BOOL)a2;
- (int)extractKey:(id)a0 toDouble:(double *)a1 defaultTo:(double)a2;
- (int)extractKey:(id)a0 toNSUInteger:(unsigned long long *)a1 defaultTo:(unsigned long long)a2;
- (int)extractKey:(id)a0 toUint32:(unsigned int *)a1 defaultTo:(unsigned int)a2;
- (int)extractKey:(id)a0 toUint64:(unsigned long long *)a1 defaultTo:(unsigned long long)a2;

@end
