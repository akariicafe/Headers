@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {
    NSString *destinationLocation;
    NSString *transportType;
    BOOL localOnlyAfterFirstUpdate;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
