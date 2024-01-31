@class NSString, NSPredicate, MGGroupQuery;

@interface COClusterRealm : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) MGGroupQuery *query;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) BOOL updateHandlerInvoked;

+ (id)realmWithMediaGroup:(id)a0;
+ (id)realmWithPredicate:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)activate:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_startQuery;
- (void)_handleQueryResult:(id)a0 error:(id)a1;
- (id)_identifierForGroupResult:(id)a0;
- (id)_initWithPredicate:(id)a0;
- (void)_invokeUpdateHandler;
- (void)_setIdentifierLocked:(id)a0;
- (void)_setUpdateHandlerLocked:(id /* block */)a0;
- (BOOL)isEqualToClusterRealm:(id)a0;

@end
