@interface MUISearchRequestID : NSObject {
    unsigned int _underlying;
}

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToID:(id)a0;

@end
