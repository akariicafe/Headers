@class NSString;

@interface GDVUEntityClass : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char intValue;
@property (nonatomic, readonly) long long hash;

+ (id)entity;
+ (id)person;
+ (id)animal;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
