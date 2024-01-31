@interface SXClassFactory : NSObject

+ (void)stopTesting;
+ (void)initialize;
+ (id /* block */)valueClassBlockForBaseClass:(Class)a0;
+ (void)startTesting;
+ (void)registerClass:(Class)a0 type:(id)a1 baseClass:(Class)a2;
+ (Class)classForBaseClass:(Class)a0 type:(id)a1;

@end
