@class NSString;

@interface SESBootUUID : NSObject {
    NSString *_bootUUID;
}

+ (id)getInstance;
+ (BOOL)isFirstLaunchAfterBootForKey:(id)a0;
+ (void)setFirstLaunchAfterBootDoneForKey:(id)a0;

- (void).cxx_destruct;

@end
