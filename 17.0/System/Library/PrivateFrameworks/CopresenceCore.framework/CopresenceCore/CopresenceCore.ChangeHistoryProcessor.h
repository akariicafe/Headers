@interface CopresenceCore.ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ onContactDeleted;
}

- (id)init;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;

@end
