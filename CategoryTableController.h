//
//  CategoryTableController.h
//  KnockKnock
//
//  Created by Patrick Wardle on 2/18/15.
//

#import <Foundation/Foundation.h>

@interface CategoryTableController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    
}

//array to hold categories
@property (nonatomic, retain)NSMutableArray *tableContents;

//category table view
@property (weak) IBOutlet NSTableView *categoryTableView;

//previously selected row
// ->needed since on 'reloadData' events, .selectedRow is -1 ...
@property NSUInteger selectedRow;

/* METHODS */


//initialize table
// ->set header text, etc
-(void)initTable:(NSMutableArray*)plugins;

//reload due to toggle of filter options
-(void)customReload;

//reset a row that was modified (manually) when selected
-(void)resetRow:(NSTableCellView*)row;

@end
