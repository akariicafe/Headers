@class NSString;

@interface AARawDataEvent : NSObject <AADataEventType> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ dictionary;
}

@property (class, nonatomic, readonly) NSString *dataName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dictionary:(id)a1;
- (id)toDict;

@end
