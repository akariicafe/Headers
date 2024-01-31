@class CollationCore, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_os_log;

@interface Collation : NSObject

@property (retain, nonatomic) CollationCore *ccore;
@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (retain, nonatomic) NSObject<OS_xpc_object> *client_con;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *coll_description;

- (id)init;
- (struct __CFDictionary { } *)package;
- (void).cxx_destruct;
- (id)initForUser:(unsigned int)a0;
- (id)mountPointOfBundleID:(id)a0;
- (id)getValidPaths:(id)a0 forLabels:(id)a1;

@end
