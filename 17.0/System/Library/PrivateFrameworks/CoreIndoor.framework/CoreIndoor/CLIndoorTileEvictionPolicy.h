@class NSObject;
@protocol OS_xpc_object;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double maxModifiedAge;
@property (nonatomic) BOOL forceClean;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)tileLastModified:(double)a0 needsEvictionAt:(double)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
