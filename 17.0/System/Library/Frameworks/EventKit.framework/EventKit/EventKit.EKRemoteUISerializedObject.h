@class NSDictionary;

@interface EventKit.EKRemoteUISerializedObject : NSObject {
    void /* unknown type, empty encoding */ serializedObjectIDDictionary;
    void /* unknown type, empty encoding */ objectIDToChangeSetDictionaryMap;
    void /* unknown type, empty encoding */ objectIDToPersistentDictionaryMap;
}

@property (nonatomic, readonly) NSDictionary *serializedObjectIDDictionary;
@property (nonatomic, readonly) NSDictionary *objectIDToChangeSetDictionaryMap;
@property (nonatomic, readonly) NSDictionary *objectIDToPersistentDictionaryMap;

- (id)init;
- (void).cxx_destruct;

@end
