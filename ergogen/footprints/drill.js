module.exports = {
  params: {
    size: 2.2,
  },
  body: p => {
    return `
      (module DrillHole (layer "F.Cu")
      ${p.at}
      (pad "" np_thru_hole circle (at 0 0) (size ${p.size} ${p.size}) (drill ${p.size}) (layers *.Cu *.Mask))
    )
    `
  }

}
