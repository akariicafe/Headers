@class NSUUID;

@interface HMDWatchSync : HMFObject <NSCopying>

@property unsigned long long syncOption;
@property (readonly, copy) NSUUID *identifier;
@property BOOL inProgress;
@property (readonly) BOOL isRetry;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1 inProgress:(BOOL)a2 isRetry:(BOOL)a3;
- (id)initWithSyncOption:(unsigned long long)a0;

@end
