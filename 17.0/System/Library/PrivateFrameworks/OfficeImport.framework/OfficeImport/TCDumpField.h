@class NSString, TCDumpType;

@interface TCDumpField : NSObject {
    TCDumpType *mType;
    NSString *mName;
}

- (void).cxx_destruct;
- (id)name;
- (id)type;
- (id)initWithType:(id)a0 name:(id)a1;

@end
