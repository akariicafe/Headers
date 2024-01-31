@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    struct __CFUUID { } *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (unsigned long long)hash;
- (void)dealloc;
- (struct __CFUUID { } *)uuid;
- (id)description;
- (id)uuidString;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)displayName;
- (id)plugIns;
- (void)addPlugIn:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (BOOL)isEqualToPlugInGroup:(id)a0;
- (id)plugInsForProtocols:(id)a0;
- (void)removePlugIn:(id)a0;

@end
