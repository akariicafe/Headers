@class NSMutableArray, NSDate;

@interface DACActivityList : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_activeActivities;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastModified;

- (void)enumerate:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)splitLocalOnly:(id /* block */)a0;
- (unsigned long long)activityCount;
- (BOOL)addActivity:(id)a0 requester:(id)a1 changeMarker:(id)a2;
- (id)changeMarkerForActivity:(id)a0;
- (id)changesFromList:(id)a0;
- (BOOL)isEqualIgnoringLastModified:(id)a0;
- (id)listWithMerge:(id)a0;
- (BOOL)removeActivity:(id)a0 requester:(id)a1;
- (unsigned long long)stateOfActivity:(id)a0;

@end
