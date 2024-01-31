@class NSString, MPMediaEntity;

@interface _MPMediaLibraryEntityChange : NSObject

@property (readonly, nonatomic) MPMediaEntity *entity;
@property (readonly, copy, nonatomic) NSString *anchor;
@property (readonly, nonatomic) long long deletionType;

- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 anchor:(id)a1 deletionType:(long long)a2;

@end
