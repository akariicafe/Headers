@class PHPersistentChangeToken, PHChange;

@interface PHPersistentChange : NSObject {
    PHChange *_change;
}

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;

- (void).cxx_destruct;
- (id)initWithChange:(id)a0;
- (id)changeDetailsForObjectType:(long long)a0 error:(id *)a1;

@end
