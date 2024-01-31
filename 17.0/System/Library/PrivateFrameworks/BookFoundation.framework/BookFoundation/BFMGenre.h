@class NSString;

@interface BFMGenre : BCMResource {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) NSString *parentId;
@property (nonatomic, readonly) NSString *parentName;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;

@end
