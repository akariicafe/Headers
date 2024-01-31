@class NSString;

@interface AASessionGroup : NSObject {
    void /* unknown type, empty encoding */ groupName;
}

@property (class, nonatomic, readonly) AASessionGroup *default;

@property (nonatomic, copy) NSString *groupName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0;

@end
